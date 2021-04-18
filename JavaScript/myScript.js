function checkempty(x,y){
    let node = document.getElementById(x);
    let data = node.value;
    if(data.length==0){
        document.getElementById(y).innerHTML="Field Should not be Empty!";
    }else{
        document.getElementById(y).innerHTML="";
    }
}

function appendImg(){
    let node = document.getElementById("divimg");
    let e = document.createElement("img");
    e.setAttribute("src","myimg.jpg");
    e.setAttribute("height","100");
    e.setAttribute("width","100");
    node.appendChild(e);
}