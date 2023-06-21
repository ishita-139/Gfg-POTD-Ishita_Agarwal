int five = 0;
        int ten = 0;
        for(int i : bills)
        {
            if(i == 5){
                five++;
            }
            else if(i == 10)
            {
                if(five)
                {
                    five--;
                    ten++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(ten>=1 && five>=1)
                {
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    fives-=3;
                }
                else return false;
            }
        }
        return true;
