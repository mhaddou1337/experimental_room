var0="hello"
var1='world'
var2="ssss"
echo $var0 $var1 $var2
echo "$var0 $var1 $var2"
echo '$var0 $var1 $var2'
printf "$var0\n$var1\n$var2\n"
#printf '$var0 $var1 $var2'

int()
{
  declare -i numb=1000
  printf "$((numb++))\n"
  printf "$((numb))\n"
  declare -i x=0
  printf "$((x+5))\n"
}

int

declare str="www"
printf $str
