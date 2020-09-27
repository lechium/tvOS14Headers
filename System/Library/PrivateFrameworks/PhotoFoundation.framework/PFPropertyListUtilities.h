/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFPropertyListUtilities : NSObject
+(id)filterPropertyList:(id)arg1 ;
+(id)_filterDictionary:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)_filterArray:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)filterPropertyList:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)filterPropertyListNoData:(id)arg1 ;
+(BOOL)canEncodeInPropertyList:(id)arg1 ;
+(id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 ;
+(id)dictionaryFromEncodedData:(id)arg1 ;
+(id)mutableDictionaryFromEncodedData:(id)arg1 ;
+(id)arrayFromEncodedData:(id)arg1 ;
+(id)mutableArrayFromEncodedData:(id)arg1 ;
+(id)encodedDataWithPropertyListObject:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)encodedDataWithPropertyListObject:(id)arg1 ;
@end
