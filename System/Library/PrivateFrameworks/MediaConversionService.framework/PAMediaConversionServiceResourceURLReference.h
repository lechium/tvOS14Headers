/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject {

	BOOL _mustStopAccessingURL;
	BOOL _shouldDeleteOnDeallocation;
	NSURL* _url;

}

@property (retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (assign) BOOL mustStopAccessingURL;                    //@synthesize mustStopAccessingURL=_mustStopAccessingURL - In the implementation block
@property (assign) BOOL shouldDeleteOnDeallocation;              //@synthesize shouldDeleteOnDeallocation=_shouldDeleteOnDeallocation - In the implementation block
+(id)referenceWithURL:(id)arg1 ;
+(id)referenceWithDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)getPathHash:(unsigned long long*)arg1 lastPathComponent:(id*)arg2 forDictionaryRepresentation:(id)arg3 ;
-(void)dealloc;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(BOOL)getFileSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationWithError:(id*)arg1 ;
-(BOOL)mustStopAccessingURL;
-(void)setMustStopAccessingURL:(BOOL)arg1 ;
-(BOOL)shouldDeleteOnDeallocation;
-(void)setShouldDeleteOnDeallocation:(BOOL)arg1 ;
@end
