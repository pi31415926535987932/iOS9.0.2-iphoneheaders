/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager {

	NSXPCConnection* _helperConnection;
	id _syncHelperReadyNotificationRef;

}

@property (retain) NSXPCConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) id syncHelperReadyNotificationRef;               //@synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef - In the implementation block
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)handlePermanentCreated;
-(NSXPCConnection *)helperConnection;
-(void)setHelperConnection:(NSXPCConnection *)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)pokeSyncHelperToInitDB;
-(char)willMoveCallsFromTempDatabase;
-(void)createHelperConnection;
-(char)validatePermDatabase;
-(void)createPermanent;
-(void)createTemporary;
-(char)validateTempDatabase;
-(id)syncHelperReadyNotificationRef;
-(void)setSyncHelperReadyNotificationRef:(id)arg1 ;
@end
