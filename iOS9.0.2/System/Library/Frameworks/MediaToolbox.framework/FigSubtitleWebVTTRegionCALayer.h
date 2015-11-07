/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(void)setViewport:(CGRect)arg1 ;
-(CFStringRef)getContentID;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)init;
-(void)layoutSublayers;
-(void)finalize;
-(void)setContent:(CFDictionaryRef)arg1 ;
@end
