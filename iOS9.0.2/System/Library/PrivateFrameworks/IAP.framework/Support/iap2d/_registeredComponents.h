/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _registeredComponents : NSObject {

	NSMutableDictionary* _components;
	NSObject*<OS_dispatch_queue> _componentsQ;

}
+(id)sharedInstance;
-(void)_changeListenerQueuePriorityHigh:(id)arg1 ;
-(void)_changeListenerQueuePriorityStop:(id)arg1 ;
-(void)clearRegisteredComponentsForConnectionID:(unsigned)arg1 ;
-(unsigned char)modeForMACAddress:(id)arg1 ;
-(void)registerComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(char)isComponent:(id)arg1 registeredForConnectionID:(unsigned)arg2 ;
-(void)unregisterComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(void)iterateRegisteredComponentsForKnownAddresses:(id)arg1 allOFF:(BOOL)arg2 ;
-(void)setMode:(unsigned char)arg1 forMACAddress:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

