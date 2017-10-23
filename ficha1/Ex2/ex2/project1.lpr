program project1;
uses crt;

var
   num, menor, maior, sair : integer;

begin
     menor := 0;
     maior := 0;
     sair := 0;
     repeat
     writeln('Introduza um numero: ');
     readln(num);
     if num < menor then
     menor := num;
     if num > maior then
     maior := num;
     until num = sair;
     writeln('O numero menor e: ', menor);
     writeln('O numero maior e: ', maior);
     readln();
end.

