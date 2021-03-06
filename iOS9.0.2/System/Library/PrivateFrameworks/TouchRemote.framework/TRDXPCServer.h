/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSXPCListener, NSArray, NSString;

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	unsigned _serverStartCount;

}

@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * remoteClientProxies; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stop;
-(void)start;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSArray *)connections;
-(NSArray *)remoteClientProxies;
@end

