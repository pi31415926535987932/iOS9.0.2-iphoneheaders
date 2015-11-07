/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>
#import <Maps/DirectionsManagerObserver.h>

@class NSArray, UIBarButtonItem, NSString;

@interface StarkDirectionsListViewController : StarkTableViewController <DirectionsManagerObserver> {

	/*^block*/id _completion;
	NSArray* _steps;
	int _stepIndex;
	char _needsToScroll;
	char _hasUserScrolled;
	UIBarButtonItem* _doneBarButtonItem;

}

@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem;              //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableViewWillScrollFromMoveEvent:(id)arg1 ;
-(void)directionsManager:(id)arg1 didReplaceRoute:(id)arg2 withRoute:(id)arg3 ;
-(void)_scrollToCurrentStepIfNeeded:(char)arg1 ;
-(void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2 ;
-(void)_updateSteps;
-(void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)_done;
@end
