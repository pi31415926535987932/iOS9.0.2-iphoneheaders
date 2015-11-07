/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/ICSearchIndexableNoteContext.h>

@class ICNoteContext;

@interface ICNoteSearchIndexableNoteContext : ICSearchIndexableNoteContext {

	ICNoteContext* _noteContext;

}

@property (assign,nonatomic,__weak) ICNoteContext * noteContext;              //@synthesize noteContext=_noteContext - In the implementation block
-(id)managedObjectContext;
-(id)contextIdentifier;
-(id)initWithNoteContext:(id)arg1 ;
-(void)enumerateAllObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setNoteContext:(ICNoteContext *)arg1 ;
-(ICNoteContext *)noteContext;
-(char)isMainContext;
-(id)objectForIdentifier:(id)arg1 includeDeleted:(char)arg2 ;
-(void)invalidateContext;
-(id)noteForIntegerID:(id)arg1 ;
@end
