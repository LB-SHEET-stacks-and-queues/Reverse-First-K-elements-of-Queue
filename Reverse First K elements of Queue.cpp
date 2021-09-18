// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) 
{
    // add code here.
    stack<int> s;
    queue<int> ans;
    int counter=0;
    
    if (k <= 0)
        return q;
    
    //corner cases
    if (q.empty()==false and k<=q.size())
    {
        //first k elements ko bharo stack me
        while(counter!=k)
        {
            s.push(q.front());
            counter++;
            
            //saath hi saath queue bhi khaali karo input wali 
            q.pop();
        }
        
        //ab stack mese pop karte karte answer queue me bharenge
        while(s.empty()==false)
        {
            ans.push(s.top());
            s.pop();
        }
        
        //ab bachi hu queue bharo answer me as it is
        while(q.empty()==false)
        {
            ans.push(q.front());
            q.pop();
        }
        
    }

    
    return ans;
}
