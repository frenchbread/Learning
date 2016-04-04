process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
    var n = parseInt(readLine());
    arr = readLine().split(' ');
    arr = arr.map(Number);
    var sum1 = 0, sum2 = 0, sum3 = 0;
    
    for(var i = 0;i < arr.length; i++){
        if (arr[i]>0) sum1++;
        if (arr[i]<0) sum2++;
        if (arr[i]===0) sum3++;
    }
    
    console.log((sum1/n).toFixed(6));
    console.log((sum2/n).toFixed(6));
    console.log((sum3/n).toFixed(6));

}
