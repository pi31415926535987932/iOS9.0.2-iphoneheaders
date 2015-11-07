/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout {

	char _centersItemsInExcessSpace;
	char _alignItemsToTop;
	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;

}

@property (assign,nonatomic) char centersItemsInExcessSpace;               //@synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace - In the implementation block
@property (assign,nonatomic) char alignItemsToTop;                         //@synthesize alignItemsToTop=_alignItemsToTop - In the implementation block
@property (nonatomic,retain) NSDictionary * itemAttributes;                //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;              //@synthesize headerAttributes=_headerAttributes - In the implementation block
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(int)lastValidSection;
-(void)applyDefaults;
-(char)centersItemsInExcessSpace;
-(void)setCentersItemsInExcessSpace:(char)arg1 ;
-(NSDictionary *)itemAttributes;
-(float)maxHeaderHeight;
-(int)firstValidSection;
-(char)alignItemsToTop;
-(void)setAlignItemsToTop:(char)arg1 ;
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)headerAttributes;
@end
