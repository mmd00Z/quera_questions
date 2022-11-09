n = input()
keys = list(map(int, input().split()))
stats = list(map(int, input().split()))

lights_on = []

for i in range(len(keys)):
    if not not stats[i]:
        lights_on.append(keys[i])

lights_on.sort()

for i in range(len(lights_on)):
    print(lights_on[i], end=" ")


# cpp code 👇👇

#  #include <iostream>
# // #include <algorithm>
# // https://quera.org/problemset/9021/
# using namespace std;

# int main()
# {
#  int n, keys[n], stats[n], n_lights_on = 0;
#  cin >> n;

#  for(int i=0; i<n; i++)
#   cin >> keys[i];

#  for(int i=0; i<n; i++){
#   cin >> stats[i];
#   n_lights_on += (stats[i])? 1:0;
#  }

#  int j=0, lights_on[n_lights_on], sorted_list[n_lights_on];
#  for(int i=0; i<n; i++){
#   if(stats[i]){
#    lights_on[j] = keys[i];
#    j++;
#   }
#  }


#  int temp;
#  for(int i=0; i<n_lights_on; i++)
#  {
#   for(j=i+1; j<n_lights_on; j++)
#   {
#    //If there is a smaller element found on right of the array then swap it.
#    if(lights_on[j] < lights_on[i]) {
#     temp = lights_on[i];
#     lights_on[i] = lights_on[j];
#     lights_on[j] = temp;
#    }
#   }
#  }

#  for(int i=0; i<n_lights_on; i++){
#   cout << lights_on[i] << " ";
#  }

#  return 0;
# }
