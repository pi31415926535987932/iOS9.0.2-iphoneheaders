/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, Stock;

@interface StockMetadataGridView : UIView {

	NSArray* _nameArray;
	NSMutableArray* _valueArray;
	Stock* _stock;
	char _metadataUpdated;
	char _drawsBottomLine;

}

@property (assign,nonatomic) char metadataUpdated;              //@synthesize metadataUpdated=_metadataUpdated - In the implementation block
@property (assign,nonatomic) char drawsBottomLine;              //@synthesize drawsBottomLine=_drawsBottomLine - In the implementation block
-(char)drawsBottomLine;
-(void)setDrawsBottomLine:(char)arg1 ;
-(void)updateValueStringsForStock:(id)arg1 reducedFractionDigits:(char)arg2 ;
-(void)_drawColumnOfStrings:(id)arg1 atPoint:(CGPoint)arg2 forWidth:(float)arg3 lineHeight:(float)arg4 lineSpacing:(float)arg5 font:(id)arg6 alignment:(int)arg7 ;
-(void)displayMetadataForStock:(id)arg1 ;
-(char)metadataUpdated;
-(void)setMetadataUpdated:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
@end
