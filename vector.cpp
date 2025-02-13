/*-->vectors in cpp
** vectors similar to our malloc and other dynamic allocation functions
* vectors are used for cpp object classes
** syntax:
vector<object type>vector name*/
//example:
vector<int>numbers;
vector<char>days;
/*in place when namespace std not mentioned
then 
std::vetor<char>days;
some of the vector functions such as
** vector end():
-> basically used to it point to last element in an iteration even though it doesnt mark anything.*/
for examle
int main()
{
vector<int>n={1,3,5,7};
cout<<*(--n.end());
return 0;
}
/*** empty():
vector function to check wether the vector is empty or not*/
int main()
{
vector<int>n = {11,22,44,55,66};
if(v.empty())
{
cout<<"empty";
}
else
{
cout<<"not empty";
}
}
/* ** vector operator[]
used to access an element randomly by index*/
int main()
{
vector<int>num ={11,22,44,55,66};)
cout<<num[3];
}
//44
/* **vector front()
used in order to retrive the first element of the vector*/
int main()
{
vector<int>={1,2,4,5};
cout<<v.front();
}
//1
/*** vector push_back
used to retrive the last element of the vector*/
int main()
{
vector<int>n={1,4,5,6,7};
cout<<v.push_back();
}
//7
/*** vector insert()
used to insert the element into vectors*/
int main()
{
vector<int>n={1,2,3,4,5};
n.insert(n.begin()+2,8);                                 //auto : basically used to automatically determines the datta type by the valuse assigned/initialized ex : auto x =10 //int type
for(auto i = v)
cout<<i<<"";
}
//1,2,8,3,4,5
/*** vector emplace()
insert element at the position in vector constructing it in-place with in the vector*/
int main()
{
vector<int>v={1 ,2,3,4,5};
v.emplace(v.begin() +2,6);
for(auto i:v)
cout<<i<<"";
}
//1 2 6 3 4 5 
//** vector assign()
//it used to assign the value in the vector by replacing the old one 
int main()
{
vector<int>n ={10,20,30,40,50,60};
v.assign(3,70);
for(auto n :v);
cout<<n<<"";
}
//10,20,70,40,50,60
//** vector erase 
//it used to errase one element specified from the vector
int main()
{
vector<int>n ={1,2,3,5,6,7}
v.erase(v.end());
for(auto i:v)
cout<<i<<"";
}
//1 2 3 4 5 6
