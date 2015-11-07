/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, SSDownload, SSPurchase, SSPurchaseResponse, NSError, NSString;

@interface MPStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _attributes;
	char _canceled;
	NSMutableArray* _overridePhaseIdentifiers;
	SSDownload* _SSDownload;
	SSPurchase* _SSPurchase;
	SSPurchaseResponse* _SSPurchaseResponse;
	int _type;

}

@property (nonatomic,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (getter=isCanceled,nonatomic,readonly) char canceled; 
@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,readonly) long long downloadSizeLimit; 
@property (nonatomic,readonly) NSError * failureError; 
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (getter=isPurchasing,nonatomic,readonly) char purchasing; 
@property (getter=isPaused,nonatomic,readonly) char paused; 
@property (nonatomic,readonly) unsigned long long libraryItemIdentifier; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSError * purchaseError; 
@property (getter=isRestore,nonatomic,readonly) char restore; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) int type;                                              //@synthesize type=_type - In the implementation block
+(id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(char)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForMediaItem:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(char)_getEffectiveStoreDownloadAttributes:(id*)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3 ;
+(id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2 ;
+(id)storeDownloadForStoreOffer:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2 ;
-(NSError *)failureError;
-(id)_SSDownload;
-(id)assetsForType:(id)arg1 ;
-(NSString *)phaseIdentifier;
-(id)initWithType:(int)arg1 attributes:(id)arg2 ;
-(long long)downloadIdentifier;
-(char)isPurchasing;
-(void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(id)_SSPurchase;
-(long long)downloadSizeLimit;
-(char)_isCanceled;
-(id)_SSPurchaseResponse;
-(id)_valueForDownloadProperty:(id)arg1 ;
-(id)_currentOverridePhaseIdentifier;
-(char)isRestore;
-(unsigned long long)libraryItemIdentifier;
-(NSError *)purchaseError;
-(void)_setCanceled:(char)arg1 ;
-(void)_setSSDownload:(id)arg1 ;
-(void)_addOverridePhaseIdentifier:(id)arg1 ;
-(void)_removeOverridePhaseIdentifier:(id)arg1 ;
-(char)isPaused;
-(id)description;
-(double)percentComplete;
-(int)type;
-(NSDictionary *)attributes;
-(char)isFinished;
-(char)isCanceled;
-(long long)storeItemIdentifier;
@end
