/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDatabase/CalendarDatabase-Structs.h>
@interface CalStoreSetupAndTeardownUtils : NSObject
+(void)_cleanKeepAwayFromServerCalsInStore:(void*)arg1 ;
+(id)_syncingAccountForParentAccount:(id)arg1 withChildren:(id)arg2 ;
+(void*)_copyStoreWithExternalIdentifier:(id)arg1 inDatabase:(CalDatabase*)arg2 ;
+(id)_calDAVInfoStringForTitle:(id)arg1 ;
+(const void*)copyStoreForAccount:(id)arg1 withChildren:(id)arg2 inDatabase:(CalDatabase*)arg3 ;
+(BOOL)_clearAllEventsFromStore:(void*)arg1 inDatabase:(CalDatabase*)arg2 ;
+(BOOL)isReadOnlyAccount:(id)arg1 ;
+(void)setLocalStoreEnabled:(BOOL)arg1 inDatabase:(CalDatabase*)arg2 ;
+(void)_enableLocalStoreIfNecessaryIgnoringAccount:(id)arg1 inDatabase:(CalDatabase*)arg2 accountStore:(id)arg3 ;
+(void*)_copyStoreForAccountWithIdentifier:(id)arg1 inDatabase:(CalDatabase*)arg2 ;
+(BOOL)_mergeEntityType:(int)arg1 fromStore:(void*)arg2 toStore:(void*)arg3 inDatabase:(CalDatabase*)arg4 ;
+(BOOL)setUpCalStoreForParentAccount:(id)arg1 withChildren:(id)arg2 inDatabase:(CalDatabase*)arg3 ;
+(BOOL)clearAllEventsFromStoreForParentAccount:(id)arg1 withChildren:(id)arg2 inDatabase:(CalDatabase*)arg3 ;
+(BOOL)drainLocalStoreInDatabase:(CalDatabase*)arg1 ;
+(BOOL)isLocalStoreEnabledInDatabase:(CalDatabase*)arg1 ;
+(BOOL)isLocalStoreEmptyInDatabase:(CalDatabase*)arg1 ;
+(BOOL)isStoreEmptyForAccount:(id)arg1 inDatabase:(CalDatabase*)arg2 ;
+(void)removeStoreForAccount:(id)arg1 withChildren:(id)arg2 inDatabase:(CalDatabase*)arg3 accountStore:(id)arg4 ;
+(void)removeStoreForDeletedAccountWithIdentifier:(id)arg1 inDatabase:(CalDatabase*)arg2 accountStore:(id)arg3 ;
+(BOOL)mergeEventsFromLocalStoreIntoStore:(void*)arg1 inDatabase:(CalDatabase*)arg2 ;
+(BOOL)mergeEventsIntoLocalStoreFromStore:(void*)arg1 inDatabase:(CalDatabase*)arg2 ;
@end
