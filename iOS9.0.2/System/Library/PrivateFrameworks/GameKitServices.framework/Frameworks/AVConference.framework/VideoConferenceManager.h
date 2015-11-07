/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoConferenceDelegate.h>

@class NSMutableArray, VideoConference, ICEResultWaitQueue, VCVTPWrapper, VCNetworkAgent;

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {

	unsigned char _clientUUID[16];
	opaque_pthread_mutex_t stateLock;
	opaque_pthread_mutex_t sipLock;
	NSMutableArray* vcList;
	VideoConference* activeConference;
	VideoConference* conferenceWithMic;
	ICEResultWaitQueue* resultQueue;
	tagHANDLE* hSIP;
	int sipRefCount;
	VCVTPWrapper* _vtpWrapper;
	char isVTPInitialized;
	VCNetworkAgent* _networkAgent;

}

@property (assign) VideoConference * activeConference; 
@property (assign) VideoConference * conferenceWithMic; 
@property (readonly) ICEResultWaitQueue * resultQueue; 
@property (readonly) NSMutableArray * vcList; 
@property (readonly) VCVTPWrapper * vtpWrapper; 
+(id)defaultVideoConferenceManager;
+(void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2 ;
-(id)init;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 didPauseAudio:(char)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteMediaStalled:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2 ;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3 ;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(char)arg3 ;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2 ;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 localAudioEnabled:(char)arg2 forCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned long)arg2 forCallID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned long)arg2 ;
-(void)registerBlocksForConference;
-(void)assertNetworkAgent;
-(void)startVTP;
-(void)stopVTP;
-(void)unassertNetworkAgent;
-(void)startSIPWithPacketMultiplexMode:(int)arg1 ;
-(tagHANDLE*)SIPHandle;
-(void)stopSIP;
-(ICEResultWaitQueue *)resultQueue;
-(void)addVideoConference:(id)arg1 ;
-(void)setActiveConference:(VideoConference *)arg1 ;
-(void)removeVideoConference:(id)arg1 ;
-(VideoConference *)conferenceWithMic;
-(void)setConferenceWithMic:(VideoConference *)arg1 ;
-(void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3 ;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned long)arg3 ;
-(void)createSIPWithPacketMultiplexMode:(int)arg1 ;
-(VCVTPWrapper *)vtpWrapper;
-(id)defaultNetworkAgent;
-(void)cleanupVTP;
-(char)isSIPHandleValid:(tagHANDLE*)arg1 ;
-(id)conferenceForCallID:(unsigned long)arg1 ;
-(char)hasVideoConference:(id)arg1 ;
-(id)conferenceForParticipantID:(id)arg1 ;
-(id)conferenceForIncomingConnectionResult:(tagCONNRESULT*)arg1 ;
-(void)pauseVideoConferences:(char)arg1 ;
-(void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(void)notifyPrimaryConnChangeToClient:(id)arg1 newConnResult:(tagCONNRESULT*)arg2 ;
-(void)getClientUUID:(unsigned char)arg1 ;
-(VideoConference *)activeConference;
-(NSMutableArray *)vcList;
@end
