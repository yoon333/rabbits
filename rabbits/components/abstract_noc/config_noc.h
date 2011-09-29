 

#ifndef _CONFIG_NOC_H


#define N_DEBUG 0
#define DDB(x)	{if(N_DEBUG){cout << x << endl;}}
// #define DDB(x)	{if(N_DEBUG){cout << x << endl;}else{}}

// turn on/off the use of the clocked NoC generated by COSI
#define USE_CLOCKED_NOC

// turn on/off the traffic recording. Not compatible with the COSI NoC (yet)
// #define TRACK_TRAFFIC

// write the vector
// #define PRINT_MAX_TRAFFIC

//  write the max values in a text file
#define PRINT_VECTORS

#define _CONFIG_NOC_H

#endif  
 
