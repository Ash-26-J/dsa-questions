voiid mop(){
    map<int,int>mp;
    /* distingiushes the same name  keys should be unique 
    map stores in key and value*/
    map<int,pair<int,int>>mp;
    mp[1]=2;//inserting
    mp.emplace({3,1})//inserting
    mp.insert({2,4})//inserting
    mp[{2,3}]=10;
    {
        {1,2}
        {2,3}
        {3,4}
    }
    //sorted key
    for (auto it:mp)
    {
        cout<<it.first<<""<<it.second<<endl;
    }
    
}