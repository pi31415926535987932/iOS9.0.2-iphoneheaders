/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPUTransportButtonEventHandler;


@protocol MPUTransportButton <NSObject>
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) char adjustsImageWhenHighlighted; 
@property (assign,nonatomic) int transportButtonImageViewContentMode; 
@required
+(id)transportButton;
-(void)setAdjustsImageWhenHighlighted:(char)arg1;
-(void)prepareForReuse;
-(char)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP5)arg1;
-(char)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(int)arg1;
-(int)transportButtonImageViewContentMode;

@end

