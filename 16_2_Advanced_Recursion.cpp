// Print all the possible permutations of a string

void permutation(string s, string ans){
    // base case
    if (s.size()==0){
        cout<<ans<<endl;
        return;
    }

    for (int i=0; i<s.size(); i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros, ans+ch);
    }
}

// Return the number of possible pathways to jump from a start to an end point

int countPath(int s, int e){
    // base case
    if (s==e){
        return 1;
    }
    if (s>e){
        return 0;
    }

    int count=0;
    for (int i=1; i<=6; i++){
        count+=countPath(s+i, e);
    }
    return count;
}