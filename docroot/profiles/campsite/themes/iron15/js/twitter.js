var CustomizeTwitterWidget=function(e){window.console&&console.log||(console={log:function(){},debug:function(){},info:function(){},warn:function(){},error:function(){}});var t=function(e){return isNaN(parseFloat(e))&&isFinite(e)},n=function(e,t){var n=e.createElement("link");return n.href=t,n.rel="stylesheet",n.type="text/css",n},o=function(e,t){var o=n(e,t),i=e.getElementsByTagName("head")[0];i.appendChild(o)},i=function(e,t){return e.indexOf(t)>=0},r=function(e){return e.frameElement.id.indexOf("twitter-widget")>=0},u=function(t,n,c){for(var l=0;l<frames.length;l++)try{r(frames[l])&&!i(t,frames[l].name)&&(o(frames[l].document,e.url),t.push(l))}catch(f){console.log("caught an error"),console.log(f)}t.length<n&&setTimeout(function(){u(t)},c)};if(void 0===e.url)return console.log("need to specify a link to your CSS file. quitting"),void 0;var c;c=void 0===e.widget_count||t(e.widget_count)?1:e.widget_count;var l;l=void 0===e.timeout_length||t(e.timeout_length)?300:e.timeout_length,setTimeout(function(){u([],c,l)},l)};