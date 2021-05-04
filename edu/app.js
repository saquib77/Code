const express = require('express');
const port = 80;
const app = express();
const fs = require('fs');
const path = require('path');
const mongoose = require('mongoose');
const bodyparser = require('body-parser');
const expressLayouts = require('express-ejs-layouts')
const AuthRoute = require('./routes/auth')
const session = require('express-session')
const flash = require('express-flash')
const passport = require('passport')
const router = require('./routes/auth')
const MongoStore = require('connect-mongo')
//const Schema = mongoose.Schema;

mongoose.connect('mongodb://localhost/CodeMasters', {useNewUrlParser: true, useUnifiedTopology: true});
const connection = mongoose.connection;
connection.once('open',()=>{
    console.log('Database Connected...');
}).catch(err=>{
    console.log('Connection failed...');
})

//Session Config
app.use(session({
    secret: 'Thisissecret',
    resave:false,
    store: MongoStore.create({ mongoUrl: 'mongodb://localhost/Codemaster'}),
    saveUninitialized: false,
    cookie:{maxAge: 1000 * 60 * 24}    
}))

//Passport Config
const passportInit = require('./src/config/passport')
passportInit(passport)
app.use(passport.initialize())
app.use(passport.session())


app.use(flash())
app.use(express.urlencoded({extended: false}))
app.use(express.json())


//Global Middlewares
app.use((req,res,next)=>{
    res.locals.user = req.user
    next()
})

//Express related stuff

app.use('/static', express.static('static')); //for serving static files
app.use(expressLayouts);
//view
app.set('view engine', 'ejs'); // set ejs as the template engine
app.set('views', path.join(__dirname, 'views')) //Set the views directory



app.use('/',router)


//SERVER
app.listen(port,()=>{
    console.log(`this is working on port ${port}`)
})
