/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIFlowLayoutSection, NSMutableArray;

@interface _UIFlowLayoutRow : NSObject {

	char _isValid;
	char _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	char _fixedItemSize;
	_UIFlowLayoutSection* _section;
	int _index;
	NSMutableArray* _items;
	float _availableSpace;
	CGSize _rowSize;
	CGRect _rowFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                     //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                                    //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) int index;                                          //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char complete;                                      //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) char fixedItemSize;                                 //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) float availableSpace;                               //@synthesize availableSpace=_availableSpace - In the implementation block
-(id)init;
-(_UIFlowLayoutSection *)section;
-(void)invalidate;
-(id)snapshot;
-(NSMutableArray *)items;
-(int)index;
-(void)insertItem:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)rowSize;
-(void)setRowSize:(CGSize)arg1 ;
-(char)fixedItemSize;
-(CGRect)rowFrame;
-(void)setFixedItemSize:(char)arg1 ;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(void)addItem:(id)arg1 atEnd:(char)arg2 ;
-(void)setComplete:(char)arg1 ;
-(void)layoutRow;
-(void)setRowFrame:(CGRect)arg1 ;
-(int)indexOfNearestItemAtPoint:(CGPoint)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(char)complete;
-(void)removeItemAtIndex:(int)arg1 ;
-(void)setIndex:(int)arg1 ;
-(float)availableSpace;
-(void)setAvailableSpace:(float)arg1 ;
@end

