/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSMutableArray, NSArray;

@interface BKBookDebugMenuController : UITableViewController {

	NSMutableArray* _mutableEntries;

}

@property (nonatomic,readonly) NSArray * entries; 
@property (nonatomic,retain) NSMutableArray * mutableEntries;              //@synthesize mutableEntries=_mutableEntries - In the implementation block
-(id)_entryWithName:(id)arg1 ;
-(NSMutableArray *)mutableEntries;
-(void)addEntryWithName:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setMutableEntries:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(NSArray *)entries;
-(void)removeEntryWithName:(id)arg1 ;
-(void)_reload;
@end

