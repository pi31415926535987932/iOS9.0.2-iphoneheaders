/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {

	EDTable* mTable;
	unsigned mHeaderRowCount;
	unsigned mTotalsRowCount;

}
-(void)clearCache;
-(BOOL)isObjectSupported:(id)arg1 ;
-(int)stripeOffset:(int)arg1 row:(BOOL)arg2 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedGlobalStyleElements:(id)arg1 ;
@end
