/*multi map stores duplicate key but in sorted order*/

/*sort(a,a+1,comp) a->first element a+1->second element comp self writen comparator */

void ex(){
    bool cmp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second<p2.second){
            return true;

        }
        else if(p1.second>p2.second) 
        {
            return false;
        }
        else{
          return true;

        }
    }
}
sort(p1,p2,comp);

//built pop count
int cnt = builtin_popcountll();