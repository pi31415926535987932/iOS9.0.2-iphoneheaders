/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

@interface SKUICommenter : SKUIMediaSocialAuthor {

	char _isAttributed;
	char _isMySelf;
	char _useImageCopy;
	NSString* _attributedName;
	UIImage* _thumbnailImage;

}

@property (nonatomic,retain) NSString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic) char isAttributed;                      //@synthesize isAttributed=_isAttributed - In the implementation block
@property (assign,nonatomic) char isMySelf;                          //@synthesize isMySelf=_isMySelf - In the implementation block
@property (assign,nonatomic) char useImageCopy;                      //@synthesize useImageCopy=_useImageCopy - In the implementation block
@property (nonatomic,copy) UIImage * thumbnailImage;                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(char)isAttributed;
-(char)isMySelf;
-(NSString *)attributedName;
-(id)initWithAuthor:(id)arg1 ;
-(void)setIsMySelf:(char)arg1 ;
-(void)setIsAttributed:(char)arg1 ;
-(void)setAttributedName:(NSString *)arg1 ;
-(char)useImageCopy;
-(void)setUseImageCopy:(char)arg1 ;
@end
