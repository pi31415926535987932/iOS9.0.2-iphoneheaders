/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/MTAddItemController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/AlarmManagerObserver.h>

@class UIPopoverController, EditAlarmViewController, AlarmCollectionEditController, UILongPressGestureRecognizer, Alarm, CADisplayLink, NSString, NSMutableSet, NSUserActivity;

@interface AlarmPadViewController : UIViewController <MTAddItemController, UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, EditAlarmViewControllerDelegate, AlarmDelegate, AlarmActiveDelegate, StateManagement, AlarmManagerObserver> {

	UIPopoverController* _addOrEditPopover;
	EditAlarmViewController* _addController;
	AlarmCollectionEditController* _editListController;
	CGRect _previousAlarmsViewport;
	UILongPressGestureRecognizer* _alarmDragRecognizer;
	Alarm* _draggingAlarm;
	CADisplayLink* _dragScrollDisplayLink;
	char _dragScrollingUp;
	double _dragScrollTimestamp;
	NSString* _alarmIDSelectedInBackground;
	NSMutableSet* _alarmIDsChangedInBackground;
	NSMutableSet* _alarmIDsRemovedInBackground;
	char _didReloadAlarmsInBackground;
	NSUserActivity* _userActivity;

}

@property (nonatomic,retain) NSString * alarmIDSelectedInBackground;                  //@synthesize alarmIDSelectedInBackground=_alarmIDSelectedInBackground - In the implementation block
@property (nonatomic,retain) NSMutableSet * alarmIDsChangedInBackground;              //@synthesize alarmIDsChangedInBackground=_alarmIDsChangedInBackground - In the implementation block
@property (nonatomic,retain) NSMutableSet * alarmIDsRemovedInBackground;              //@synthesize alarmIDsRemovedInBackground=_alarmIDsRemovedInBackground - In the implementation block
@property (assign,nonatomic) char didReloadAlarmsInBackground;                        //@synthesize didReloadAlarmsInBackground=_didReloadAlarmsInBackground - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeChangedForAlarm:(id)arg1 active:(char)arg2 ;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(void)didDeleteAlarm:(id)arg1 ;
-(void)didSuspend;
-(id)selectedAlarm;
-(void)refreshButtonStates;
-(NSMutableSet *)alarmIDsChangedInBackground;
-(NSMutableSet *)alarmIDsRemovedInBackground;
-(NSString *)alarmIDSelectedInBackground;
-(char)didReloadAlarmsInBackground;
-(void)showEditView;
-(void)selectAlarm:(id)arg1 scroll:(char)arg2 ;
-(void)handleAlarmDrag:(id)arg1 ;
-(void)beginAlarmDrag;
-(void)updateAlarmDrag;
-(void)endAlarmDragAndSave:(char)arg1 ;
-(void)scrollAlarmSchedule:(id)arg1 ;
-(void)commitAddOrEditOperation;
-(void)cleanUpPopover;
-(void)setAlarmIDSelectedInBackground:(NSString *)arg1 ;
-(void)setAlarmIDsChangedInBackground:(NSMutableSet *)arg1 ;
-(void)setAlarmIDsRemovedInBackground:(NSMutableSet *)arg1 ;
-(void)setDidReloadAlarmsInBackground:(char)arg1 ;
-(void)saveState;
-(id)init;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)contentView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)defaultPNGName;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)alarmManagerDidUpdateAlarms:(id)arg1 ;
-(void)alarmManager:(id)arg1 didAddAlarm:(id)arg2 ;
-(void)alarmManager:(id)arg1 didUpdateAlarm:(id)arg2 ;
-(void)alarmManager:(id)arg1 didRemoveAlarm:(id)arg2 ;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
@end

