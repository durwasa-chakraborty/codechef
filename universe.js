process.stdin.setRawMode(false)
process.stdin.on('readable',function(){
    var key = 0
    key = (process.stdin.read())
    solution(key);
    if(key==42)
        process.exit()
});

function solution(key)
{
    //console.log(key);
}

