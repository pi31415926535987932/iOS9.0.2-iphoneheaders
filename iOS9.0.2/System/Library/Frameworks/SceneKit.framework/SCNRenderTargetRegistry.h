/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCNRenderContext;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface SCNRenderTargetRegistry : NSObject {

	id<SCNRenderContext> _renderContext;
	NSMutableDictionary* _renderTargets;
	NSMutableDictionary* _nameToRenderTarget;
	NSMutableArray* _purgeArray;
	int _frameStamp;

}

@property (nonatomic,readonly) int numberOfRenderTargets; 
-(id)renderTargetWithName:(id)arg1 passIdentifier:(int)arg2 ;
-(void)releaseRenderTarget:(id)arg1 ;
-(void)_purgeWithReason:(int)arg1 ;
-(int)numberOfRenderTargets;
-(id)initWithRenderContext:(id)arg1 ;
-(id)renderTargetWithDescription:(SCD_Struct_SC3)arg1 size:(id)arg2 name:(int)arg3 passIdentifier:(int)arg4 ;
-(void)releaseRenderTargetNamed:(id)arg1 passIdentifier:(int)arg2 ;
-(void)retainTextureWithName:(id)arg1 passIdentifier:(int)arg2 retainCount:(int)arg3 ;
-(void)releaseTextureWithName:(id)arg1 passIdentifier:(int)arg2 retainCount:(int)arg3 ;
-(void)bumpTimeStamp;
-(void)finalizeFrame;
-(void)viewportDidResize;
-(void)dealloc;
-(void)purge;
-(void)cleanup;
@end
