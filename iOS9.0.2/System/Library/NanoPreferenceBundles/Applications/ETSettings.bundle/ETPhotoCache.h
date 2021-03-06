/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSHashTable, NSObject, ETFriendGroup;

@interface ETPhotoCache : NSObject {

	NSMapTable* _cacheEntries;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _fileQueue;
	ETFriendGroup* _highPriorityGroup;

}

@property (assign,nonatomic,__weak) ETFriendGroup * highPriorityGroup;              //@synthesize highPriorityGroup=_highPriorityGroup - In the implementation block
+(id)_cacheableStyles;
+(id)sharedCache;
-(ETFriendGroup *)highPriorityGroup;
-(void)_friendListChanged:(id)arg1 ;
-(id)photoForPerson:(id)arg1 style:(int)arg2 ;
-(void)loadPhotosForPerson:(id)arg1 ;
-(void)setHighPriorityGroup:(ETFriendGroup *)arg1 ;
-(void)loadPhotosForGroup:(id)arg1 ;
-(void)_memoryWarningReceived:(id)arg1 ;
-(void)_friendUnlinkedFromAddressBook:(id)arg1 ;
-(void)_notifyObserversOfUpdateForPerson:(id)arg1 photo:(id)arg2 style:(int)arg3 ;
-(char)_styleRequiresSyncUpdate:(int)arg1 ;
-(id)_imageFilePathForABGUID:(id)arg1 style:(int)arg2 ;
-(id)_retrieveImageAtPath:(id)arg1 ;
-(char)_didSearchABForPhoto:(id)arg1 ;
-(id)_getAddressBookImageDataForPerson:(id)arg1 ;
-(id)_imageFromImageData:(id)arg1 style:(int)arg2 ;
-(void)_updateEntry:(id)arg1 photo:(id)arg2 style:(int)arg3 ;
-(void)_saveImage:(id)arg1 withStyle:(int)arg2 forPerson:(id)arg3 ;
-(char)_isStyleHighPriority:(int)arg1 ;
-(void)_setSearchedABPhotoForPerson:(id)arg1 ;
-(id)_searchABForPhotoFlagFilenameFromABGUID:(id)arg1 ;
-(void)_deleteDiskCacheForABGUID:(id)arg1 ;
-(id)_imageDirectoryPath;
-(id)_entryForPerson:(id)arg1 ;
-(void)_retrievePhotosForEntry:(id)arg1 priorityStyle:(int)arg2 addressBookImageData:(id)arg3 ;
-(void)_evictEntryForPerson:(id)arg1 abGUID:(id)arg2 removeFile:(char)arg3 ;
-(void)updateWithAddressBookChangesIfNecessary;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_stringForStyle:(int)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
@end

