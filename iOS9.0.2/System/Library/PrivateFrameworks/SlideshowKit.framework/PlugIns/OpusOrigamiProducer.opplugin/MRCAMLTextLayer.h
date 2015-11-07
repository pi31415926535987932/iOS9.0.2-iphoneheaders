/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer {

	MRImage* textImage;
	MRTextRenderer* textRenderer;

}

@property (nonatomic,retain) MRImage * textImage; 
@property (nonatomic,retain) MRTextRenderer * textRenderer; 
-(MRTextRenderer *)textRenderer;
-(void)setTextRenderer:(MRTextRenderer *)arg1 ;
-(MRImage *)textImage;
-(void)setTextImage:(MRImage *)arg1 ;
-(void)dealloc;
@end
