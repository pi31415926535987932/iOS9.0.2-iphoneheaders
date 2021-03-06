/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {

	unsigned short _operatorChar;

}

@property (nonatomic,readonly) unsigned short operatorChar;              //@synthesize operatorChar=_operatorChar - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(char)canBeUsedWithRange;
-(char)isNaturalSuperscript;
-(char)isEllipsis;
-(char)isTermSeparator;
-(char)isOperationSymbol;
-(char)isFenceDelimiter;
-(id)latexFormatStringAsOver;
-(char)_isIntegral;
-(char)_isUnionOrIntersection;
-(char)_isSummation;
-(char)_isRingOperator;
-(char)_isInvisibleCharacter;
-(char)_isMinusSign;
-(unsigned short)operatorChar;
-(id)mathMLString;
@end

