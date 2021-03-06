/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVURLAssetInternal, AVAssetCache, NSString, AVAssetResourceLoader, NSURL;

@interface AVURLAsset : AVAsset {

	AVURLAssetInternal* _URLAsset;

}

@property (nonatomic,readonly) AVAssetCache * assetCache; 
@property (nonatomic,readonly) char shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) char shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_UTTypes;
+(id)_figMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 error:(id*)arg3 ;
+(id)_figHFSFileTypes;
+(char)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)audiovisualTypes;
+(id)audiovisualMIMETypes;
-(void)cancelLoading;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(unsigned)referenceRestrictions;
-(void)_tracksDidChange;
-(char)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(void)_removeUserInfoObject;
-(Class)_classForAssetTracks;
-(id)_tracks;
-(char)shouldMatchDataInCacheByURLPathComponentOnly;
-(char)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)identifyingTagClass;
-(id)_instanceIdentifier;
-(id)SHA1Digest;
-(AVAssetCache *)assetCache;
-(id)downloadDestinationURL;
-(char)_shouldOptimizeAccessForLinearMoviePlayback;
-(void)_setUserInfoObject:(id)arg1 ;
-(id)resolvedURL;
-(id)lyrics;
-(unsigned long long)downloadToken;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSURL *)URL;
-(NSString *)cacheKey;
-(void)finalize;
-(AVAssetResourceLoader *)resourceLoader;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracks;
@end

