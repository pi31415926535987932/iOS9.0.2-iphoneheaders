/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AKTextAnnotationAttributeHelper : NSObject
+(id)typingAttributes:(id)arg1 byApplyingScaleFactor:(float)arg2 ;
+(id)newTextStorage:(id)arg1 byApplyingScaleFactor:(float)arg2 ;
+(id)actualOrPlaceholderTextOfAnnotation:(id)arg1 ;
+(id)font:(id)arg1 byApplyingScaleFactor:(float)arg2 ;
+(id)placeholderTextOfAnnotation:(id)arg1 ;
+(void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(int*)arg3 direction:(int*)arg4 ;
+(id)fontsOfAnnotations:(id)arg1 ;
+(id)fontsOfEditor:(id)arg1 ;
+(void)setFont:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)setTextAlignment:(int)arg1 ofAnnotation:(id)arg2 ;
+(id)textAttributesOfAnnotations:(id)arg1 ;
+(id)textAttributesOfEditor:(id)arg1 ;
+(void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2 ;
+(void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3 ;
+(void)adjustAnnotationBoundsToFitText:(id)arg1 ;
@end
