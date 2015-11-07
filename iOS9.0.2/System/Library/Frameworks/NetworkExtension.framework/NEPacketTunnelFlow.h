/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSFileHandle;

@interface NEPacketTunnelFlow : NSObject {

	char _handlerSetup;
	long _interfaceType;
	NEVirtualInterface_sRef _interface;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileHandle* _socket;
	/*^block*/id _packetHandler;

}

@property (readonly) long interfaceType;                             //@synthesize interfaceType=_interfaceType - In the implementation block
@property (readonly) NEVirtualInterface_sRef interface;              //@synthesize interface=_interface - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign) char handlerSetup;                                //@synthesize handlerSetup=_handlerSetup - In the implementation block
@property (retain) NSFileHandle * socket;                            //@synthesize socket=_socket - In the implementation block
@property (copy) id packetHandler;                                   //@synthesize packetHandler=_packetHandler - In the implementation block
-(char)setVirtualInterfaceSocket:(id)arg1 ;
-(void)closeVirtualInterface;
-(void)setSocket:(NSFileHandle *)arg1 ;
-(NSFileHandle *)socket;
-(void)setHandlerSetup:(char)arg1 ;
-(void)setPacketHandler:(id)arg1 ;
-(id)packetHandler;
-(char)handlerSetup;
-(id)initWithVirtualInterfaceType:(long)arg1 ;
-(void)readPacketsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)writePackets:(id)arg1 withProtocols:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NEVirtualInterface_sRef)interface;
-(long)interfaceType;
@end
