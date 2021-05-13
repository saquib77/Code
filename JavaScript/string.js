var res = function(s1, s2){
    var s1weight=0,s2weight=0;
    for (let i in s1) {
        s1weight=s1weight + (s1.charCodeAt(i)%96);
    }
    for (let i in s2) {
        s2weight=s2weight + (s2.charCodeAt(i)%96);
    }
    if(s1weight>s2weight) return 1;
    else if(s1weight<s2weight) return 2;
    else if(s1weight===s2weight) return "equal";
}