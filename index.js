/*

Write a program that prints the numbers from 1 to 100. But for multiples of three print "Fizz" instead of
the number and for the multiples of five print "Buzz". For numbers which are multiples of both three and
five print "FizzBuzz"

*/


var str = ""
for (var i = 1; i <= 100; ++i) {
  var fizz = (i%3 == 0 && i >= 3);
  var buzz = (i%5 == 0 && i >= 5);
  var str2 =   ((fizz) ? "Fizz" : "") +
    ((buzz) ? "Buzz" : "") +
    ((!fizz && !buzz) ? i : "");
  str = str + str2 + "\r\n";
  console.log(str2);
}
require("fs").writeFileSync("./output", str);
