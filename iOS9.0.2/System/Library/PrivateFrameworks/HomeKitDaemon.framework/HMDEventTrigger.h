/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTrigger.h>
#import <libobjc.A.dylib/HMDLocationDelegate.h>

@class NSMutableArray, NSPredicate, NSString;

@interface HMDEventTrigger : HMDTrigger <HMDLocationDelegate> {

	NSMutableArray* _characteristicEvents;
	NSMutableArray* _locationEvents;
	NSPredicate* _evaluationCondition;

}

@property (nonatomic,retain) NSMutableArray * characteristicEvents;              //@synthesize characteristicEvents=_characteristicEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationEvents;                    //@synthesize locationEvents=_locationEvents - In the implementation block
@property (nonatomic,readonly) NSPredicate * evaluationCondition;                //@synthesize evaluationCondition=_evaluationCondition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidate;
-(id)sunrise;
-(id)sunset;
-(void)activate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(void)_registerForMessages;
-(char)shouldEncodeLastFireDate:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(id)initWithName:(id)arg1 events:(id)arg2 evaluationCondition:(id)arg3 ;
-(void)_sortEvents:(id)arg1 ;
-(void)setCharacteristicEvents:(NSMutableArray *)arg1 ;
-(void)setLocationEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)characteristicEvents;
-(NSMutableArray *)locationEvents;
-(void)_activate:(char)arg1 characteristicEvents:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_activateLocationEvents:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSPredicate *)evaluationCondition;
-(void)_reevaluateIfRelaunchRequired:(char)arg1 ;
-(void)_handleLocationAuthorization:(int)arg1 ;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(void)_handleLocationAuthorizationMessage:(id)arg1 ;
-(void)_handleUpdateEventTriggerCondition:(id)arg1 ;
-(void)_handleAddEventToEventTrigger:(id)arg1 ;
-(void)_handleRemoveEventsFromEventTrigger:(id)arg1 ;
-(void)_handleUpdateEventForEventTrigger:(id)arg1 ;
-(void)_handleRetrieveLocationEventForEventTrigger:(id)arg1 ;
-(id)_updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(char*)arg3 removedAccessory:(id)arg4 ;
-(void)_checkForNoEvents;
-(char)_compareEventValue:(id)arg1 withCharacteristic:(id)arg2 ;
-(void)_evaluateFiringTrigger;
-(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
-(void)_saveChanges:(id)arg1 ;
-(id)_rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 ;
-(void)executeTriggerAfterEvaluatingCondition:(id)arg1 ;
-(void)didDetermineState:(int)arg1 forRegion:(id)arg2 ;
-(id)addDeltaToNow:(id)arg1 ;
-(id)dateTodayMatchingComponents:(id)arg1 ;
@end

