echo "ENter"
read n
sum=0
while [$n -gt 0]
do
rem=$((n%10))
cube=$((rem*rem*rem))
sum=$((sum+cube))
n=$((n/10))
done
if []