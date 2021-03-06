/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem {

	PHAsset* _asset;

}

@property (retain) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
+(id)scheme;
+(char)isRemote;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForPHAsset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)wantsTemporaryDiskCache;
-(char)wantsDiskCachedMetadata;
-(char)wantsDiskCachedThumbnailForResolution:(unsigned)arg1 ;
-(void)_resolveAssetIfNeeded;
-(id)initWithPHAsset:(id)arg1 ;
@end

