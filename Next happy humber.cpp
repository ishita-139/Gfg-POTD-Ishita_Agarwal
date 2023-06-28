bool isHappy(int n) {
        if (n<10){
            if (n==1 || n==7) return true;
            else return false;
        }
        long long int sum=0;
        while (n>0){
            int las=n%10;
            sum+=las*las;
            n/=10;
        }
        return isHappy(sum);
      }
      int nextHappy(int n){
        while (n++){
            if (isHappy(n)) break;
        }
        return n;
    }
