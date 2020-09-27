/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoCollection.h>

@class NSString;

@interface TVMutablePhotoCollection : TVPhotoCollection

@property (nonatomic,copy) NSString * collectionIdentifier; 
@property (nonatomic,copy) NSString * collectionName; 
@property (nonatomic,copy) NSString * remoteURL; 
@property (assign,nonatomic) BOOL hasExternalURLs; 
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(void)setRemoteURL:(NSString *)arg1 ;
-(void)setHasExternalURLs:(BOOL)arg1 ;
@end
