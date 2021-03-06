//
//  Partition.h
//  GGJ13
//
//  Created by noliv on 25/01/13.
//
//

#import <Foundation/Foundation.h>

@interface WHPartition : NSObject <NSCoding>

@property (strong) NSMutableArray *array;

-(void)saveData;
-(void)saveDataForTrack:(int)num;
-(void)loadData;
-(void)loadTrackWithBPM:(int)bpm;

-(float)nextItemTimestamp;
-(void)goToNextItem;
-(int)itemLane;

@end
