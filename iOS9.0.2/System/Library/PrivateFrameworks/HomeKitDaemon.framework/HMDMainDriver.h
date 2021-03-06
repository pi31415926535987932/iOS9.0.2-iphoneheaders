/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, HMDHomeManager, HMDAccessoryBrowser, HMDXpcServer, HMDIDSMessageDispatcher, HMMessageDispatcher, HMDCloudDataSyncManager, HMDIDSMessageTransport, HMDAccessoryManager, NSMutableArray, HMDMessageFilterChain, HMDIdentityRegistry;

@interface HMDMainDriver : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	HMDAccessoryBrowser* _accessoryBrowser;
	HMDXpcServer* _xpcServer;
	HMDIDSMessageDispatcher* _messageDispatcher;
	HMMessageDispatcher* _notificationRelayDispatcher;
	HMDCloudDataSyncManager* _cloudDataSyncManager;
	HMDIDSMessageTransport* _idsTransport;
	HMDIDSMessageTransport* _idsProxyTransport;
	HMDAccessoryManager* _accessoryManager;
	NSMutableArray* _unpairedAccessories;
	HMDMessageFilterChain* _msgFilterChain;
	HMDIdentityRegistry* _identityRegistry;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDHomeManager * homeManager;                                   //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMDAccessoryBrowser * accessoryBrowser;                         //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) HMDXpcServer * xpcServer;                                       //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,retain) HMDIDSMessageDispatcher * messageDispatcher;                    //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * notificationRelayDispatcher;              //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (nonatomic,retain) HMDCloudDataSyncManager * cloudDataSyncManager;                 //@synthesize cloudDataSyncManager=_cloudDataSyncManager - In the implementation block
@property (nonatomic,retain) HMDIDSMessageTransport * idsTransport;                          //@synthesize idsTransport=_idsTransport - In the implementation block
@property (nonatomic,retain) HMDIDSMessageTransport * idsProxyTransport;                     //@synthesize idsProxyTransport=_idsProxyTransport - In the implementation block
@property (nonatomic,retain) HMDAccessoryManager * accessoryManager;                         //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * unpairedAccessories;                           //@synthesize unpairedAccessories=_unpairedAccessories - In the implementation block
@property (nonatomic,retain) HMDMessageFilterChain * msgFilterChain;                         //@synthesize msgFilterChain=_msgFilterChain - In the implementation block
@property (nonatomic,retain) HMDIdentityRegistry * identityRegistry;                         //@synthesize identityRegistry=_identityRegistry - In the implementation block
+(id)driver;
-(id)init;
-(void)start;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)executeBTAJob:(const char*)arg1 withXPCDict:(id)arg2 ;
-(void)logError:(id)arg1 component:(id)arg2 ;
-(void)setAccessoryManager:(HMDAccessoryManager *)arg1 ;
-(void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setMsgFilterChain:(HMDMessageFilterChain *)arg1 ;
-(void)setIdentityRegistry:(HMDIdentityRegistry *)arg1 ;
-(void)setIdsTransport:(HMDIDSMessageTransport *)arg1 ;
-(void)setIdsProxyTransport:(HMDIDSMessageTransport *)arg1 ;
-(HMDIDSMessageTransport *)idsTransport;
-(HMDIDSMessageTransport *)idsProxyTransport;
-(HMDMessageFilterChain *)msgFilterChain;
-(HMDIdentityRegistry *)identityRegistry;
-(HMMessageDispatcher *)notificationRelayDispatcher;
-(void)setMessageDispatcher:(HMDIDSMessageDispatcher *)arg1 ;
-(void)setXpcServer:(HMDXpcServer *)arg1 ;
-(HMDIDSMessageDispatcher *)messageDispatcher;
-(HMDXpcServer *)xpcServer;
-(HMDAccessoryManager *)accessoryManager;
-(void)setAccessoryBrowser:(HMDAccessoryBrowser *)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)initBackgroundTaskAgentForTimerTriggers;
-(HMDAccessoryBrowser *)accessoryBrowser;
-(HMDCloudDataSyncManager *)cloudDataSyncManager;
-(void)setCloudDataSyncManager:(HMDCloudDataSyncManager *)arg1 ;
-(NSMutableArray *)unpairedAccessories;
-(void)setUnpairedAccessories:(NSMutableArray *)arg1 ;
@end

