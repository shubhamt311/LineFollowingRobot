# LineFollowingRobot
A line following robot able to detect the shortest path with the use of an special optimize algorithm 



//////////////////////////////////////   ALGORITHM  STRUCTURE  //////////////////////////////////////


  THE ALGORITHM WORKS ON VAROIUS EDGE CASES WHICH ARE AS FOLLOWING BELOW :
                                
                                
 ***************FORWARD MOVEMENT***************
  
  1 ).   FOLLOWING BLACK LINE 
  
        L , LL , R , RR ARE AT WHITE 
        M IS AT BLACK 
        
  2 ).    FOLLOWING WHITE LINE 
  
        L , LL , R , RR ARE AT BLACK 
        M IS AT WHITE
        
                                   
 *********** LEFT TURN MOVEMENT ***********
 
 1 ).    RIGHT ANGLE LEFT 
  
        L , LL M RE AT BLACK
        R ,RR AT WHITE
        
 2 ).    SLIGHTLY LEFT 
  
        LL IS AT BLACK
        R , RR , L , LL ARE  AT WHITE
        
                                  
  *********** RIGHT TURN MOVEMENT *************
  
    1 ).   RIGHT ANGLE RIGHT 
  
        R , RR M RE AT BLACK
        L , LL AT WHITE
        
    2 ).   SLIGHTLY LEFT 
  
        RR IS AT BLACK
        R , RR , L , LL ARE  AT WHITE
                                         

    
