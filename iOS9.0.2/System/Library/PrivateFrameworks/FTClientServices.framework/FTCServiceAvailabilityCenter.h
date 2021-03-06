/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)addListenerID:(id)arg1 forService:(int)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(int)arg2 ;
-(int)availabilityForListenerID:(id)arg1 forService:(int)arg2 ;
-(void)_postNotificationForService:(int)arg1 availability:(int)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(char)_isValidServiceType:(int)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(int)arg1 create:(char)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(char)hasListenerID:(id)arg1 forService:(int)arg2 ;
@end

