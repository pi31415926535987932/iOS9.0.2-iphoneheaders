/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _MPUExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _rects;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize calculatedContentSize;              //@synthesize contentSize=_contentSize - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGSize)calculatedContentSize;
-(void)_calculateSizes;
@end
