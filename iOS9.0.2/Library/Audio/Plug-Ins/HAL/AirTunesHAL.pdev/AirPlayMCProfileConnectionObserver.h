/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTunesHAL/AirTunesHAL-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface AirPlayMCProfileConnectionObserver : NSObject <MCProfileConnectionObserver> {

	AirPlayClient* _client;
	char _isStarkVehicleUIAllowedBySettings;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCarPlayRestrictionChange;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)initWithClient:(AirPlayClient*)arg1 ;
@end
