/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {

	NSURL* _downloadedFileURL;

}
-(id)downloadedFileURL;
-(void)didFinishDownloadingToURL:(id)arg1 ;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
@end

